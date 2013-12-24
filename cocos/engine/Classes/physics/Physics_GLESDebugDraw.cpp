#include "Physics_GLESDebugDraw.h"
#include "cocos2d.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

USING_NS_CC;

namespace engine
{
	namespace physics
	{
		GLESDebugDraw::GLESDebugDraw()
			: mRatio( 1.0f )
			, mDrawOffset(0,0)
		{
			this->initShader();
		}

		GLESDebugDraw::GLESDebugDraw( float32 ratio )
			: mRatio( ratio )
		{
			this->initShader();
		}

		void GLESDebugDraw::initShader( void )
		{
			mShaderProgram = ShaderCache::getInstance()->getProgram(GLProgram::SHADER_NAME_POSITION_U_COLOR);

			mColorLocation = glGetUniformLocation( mShaderProgram->getProgram(), "u_color");
		}

		void GLESDebugDraw::DrawPolygon(const b2Vec2* old_vertices, int vertexCount, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			b2Vec2* vertices = new b2Vec2[vertexCount];
			for( int i=0;i<vertexCount;i++) 
			{
				vertices[i] = old_vertices[i];
				vertices[i] *= mRatio;
				vertices[i] += mDrawOffset;
			}

			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);

			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, vertices);
			glDrawArrays(GL_LINE_LOOP, 0, vertexCount);

			CC_INCREMENT_GL_DRAWS(1);

			CHECK_GL_ERROR_DEBUG();

			delete[] vertices;
		}

		void GLESDebugDraw::DrawSolidPolygon(const b2Vec2* old_vertices, int vertexCount, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			b2Vec2* vertices = new b2Vec2[vertexCount];
			for( int i=0;i<vertexCount;i++) {
				vertices[i] = old_vertices[i];
				vertices[i] *= mRatio;
				vertices[i] += mDrawOffset;
			}
    
			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r*0.5f, color.g*0.5f, color.b*0.5f, 0.5f);

			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, vertices);

			glDrawArrays(GL_TRIANGLE_FAN, 0, vertexCount);

			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
			glDrawArrays(GL_LINE_LOOP, 0, vertexCount);

			CC_INCREMENT_GL_DRAWS(2);

			CHECK_GL_ERROR_DEBUG();

			delete[] vertices;
		}

		void GLESDebugDraw::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			const float32 k_segments = 16.0f;
			int vertexCount=16;
			const float32 k_increment = 2.0f * b2_pi / k_segments;
			float32 theta = 0.0f;
    
			GLfloat*    glVertices = new GLfloat[vertexCount*2];
			for (int i = 0; i < k_segments; ++i)
			{
				b2Vec2 v = center + radius * b2Vec2(cosf(theta), sinf(theta));
				glVertices[i*2]=v.x * mRatio;
				glVertices[i*2+1]=v.y * mRatio;
				theta += k_increment;
				glVertices[i*2] += mDrawOffset.x;
				glVertices[i*2+1] += mDrawOffset.y;
			}
    
			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);

			glDrawArrays(GL_LINE_LOOP, 0, vertexCount);

			CC_INCREMENT_GL_DRAWS(1);

			CHECK_GL_ERROR_DEBUG();

			delete[] glVertices;
		}

		void GLESDebugDraw::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			const float32 k_segments = 16.0f;
			int vertexCount=16;
			const float32 k_increment = 2.0f * b2_pi / k_segments;
			float32 theta = 0.0f;
    
			GLfloat*    glVertices = new GLfloat[vertexCount*2];
			for (int i = 0; i < k_segments; ++i)
			{
				b2Vec2 v = center + radius * b2Vec2(cosf(theta), sinf(theta));
				glVertices[i*2]=v.x * mRatio;
				glVertices[i*2+1]=v.y * mRatio;
				theta += k_increment;
				glVertices[i*2] += mDrawOffset.x;
				glVertices[i*2+1] += mDrawOffset.y;
			}
    
			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r*0.5f, color.g*0.5f, color.b*0.5f, 0.5f);
			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);
			glDrawArrays(GL_TRIANGLE_FAN, 0, vertexCount);


			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
			glDrawArrays(GL_LINE_LOOP, 0, vertexCount);

			// Draw the axis line
			DrawSegment(center,center+radius*axis,color);

			CC_INCREMENT_GL_DRAWS(2);

			CHECK_GL_ERROR_DEBUG();

			delete[] glVertices;
		}

		void GLESDebugDraw::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);

			GLfloat    glVertices[] = 
			{
				p1.x * mRatio + mDrawOffset.x, p1.y * mRatio + mDrawOffset.y,
				p2.x * mRatio + mDrawOffset.x, p2.y * mRatio + mDrawOffset.y
			};
			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);

			glDrawArrays(GL_LINES, 0, 2);

			CC_INCREMENT_GL_DRAWS(1);

			CHECK_GL_ERROR_DEBUG();
		}

		void GLESDebugDraw::DrawTransform(const b2Transform& xf)
		{
			b2Vec2 p1 = xf.p, p2;
			const float32 k_axisScale = 0.4f;
			p2 = p1 + k_axisScale * xf.q.GetXAxis();
			DrawSegment(p1, p2, b2Color(1,0,0));

			p2 = p1 + k_axisScale * xf.q.GetYAxis();
			DrawSegment(p1,p2,b2Color(0,1,0));
		}

		void GLESDebugDraw::DrawPoint(const b2Vec2& p, float32 size, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);

			//    glPointSize(size);

			GLfloat                glVertices[] = {
				p.x * mRatio + mDrawOffset.x, p.y * mRatio + mDrawOffset.y
			};

			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);

			glDrawArrays(GL_POINTS, 0, 1);
			//    glPointSize(1.0f);

			CC_INCREMENT_GL_DRAWS(1);

			CHECK_GL_ERROR_DEBUG();
		}

		void GLESDebugDraw::DrawString(int x, int y, const char *string, ...)
		{
		//    NSLog(@"DrawString: unsupported: %s", string);
			//printf(string);
			/* Unsupported as yet. Could replace with bitmap font renderer at a later date */
		}

		void GLESDebugDraw::DrawAABB(b2AABB* aabb, const b2Color& color)
		{
			mShaderProgram->use();
			mShaderProgram->setUniformsForBuiltins();

			mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);

			GLfloat                glVertices[] = {
				aabb->lowerBound.x * mRatio + mDrawOffset.x, aabb->lowerBound.y * mRatio + mDrawOffset.y,
				aabb->upperBound.x * mRatio + mDrawOffset.x, aabb->lowerBound.y * mRatio + mDrawOffset.y,
				aabb->upperBound.x * mRatio + mDrawOffset.x, aabb->upperBound.y * mRatio + mDrawOffset.y,
				aabb->lowerBound.x * mRatio + mDrawOffset.x, aabb->upperBound.y * mRatio + mDrawOffset.y
			};

			glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);
			glDrawArrays(GL_LINE_LOOP, 0, 8);

			CC_INCREMENT_GL_DRAWS(1);

			CHECK_GL_ERROR_DEBUG();
		}
	}
}