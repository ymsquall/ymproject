function LUALog(str)
	CCLuaLog('LUA : '..str)
end
function LUAGetResourceFullDir(file, path)
	local filePath = nil
	if path ~= nil and path ~= '' then
		filePath = path..'/'..file
	else
		filePath = file
	end
	return CCFileUtils:getInstance():fullPathForFilename(filePath)
end
function LUAGetDisplayOffPos()
	local offPos = CCPoint(0,0)
	local index = 0
	if __LUADeviceWinSize.width <= 960 and __LUADeviceWinSize.height <= 640 then --iphone4
		index = 1
	elseif __LUADeviceWinSize.width > 960 and __LUADeviceWinSize.width <=1200 and __LUADeviceWinSize.height <= 640 then	--iphone5 1136 X 640
		index = 2
		offPos.setPoint(90,0)
	elseif __LUADeviceWinSize.width > 960 and __LUADeviceWinSize.width <=1200 and __LUADeviceWinSize.height > 640 and __LUADeviceWinSize.height < 800 then	--iPad 1024 x 768
		index = 3
		offPos.setPoint(36,128/2)
	elseif __LUADeviceWinSize.width  >= 2000 and __LUADeviceWinSize.height >= 1500 then
		index = 4
		offPos.setPoint(2048/2-960/2,1536/2-640/2);
	end
	print(offPos.width, offPos.height, index)
	return offPos,index
end

__LUADeviceWinSize = CCDirector:sharedDirector():getWinSize()
__LUADeviceVisibleSize = CCDirector:sharedDirector():getVisibleSize()
__LUADeviceOriginPos = CCDirector:sharedDirector():getVisibleOrigin()
__LUADeviceOffsetPos, __LUADeviceOffIndex = LUAGetDisplayOffPos()
__LUADeviceCenterPos = CCPoint(__LUADeviceVisibleSize.width/2.0, __LUADeviceVisibleSize.height/2.0)
__LUADeviceRealCenterPos = CCPoint(__LUADeviceCenterPos.x-__LUADeviceOffsetPos.x, __LUADeviceCenterPos.y-__LUADeviceOffsetPos.y)
__LUADeviceResourceDir = CCFileUtils:getInstance():fullPathForFilename('')
local startmsg = 'lua script begining in device info'..
				 ':\n\t[ScreenSize = '..__LUADeviceVisibleSize.width..','..__LUADeviceVisibleSize.height..
				 ']\n\t[Origin = '..__LUADeviceOriginPos.x..','..__LUADeviceOriginPos.y..
				 ']\n\t[Offset = '..__LUADeviceOffsetPos.x..','..__LUADeviceOffsetPos.y..
				 ']\n\t[Center = '..__LUADeviceCenterPos.x..','..__LUADeviceCenterPos.y..
				 ']\n\t[RealCenter = '..__LUADeviceRealCenterPos.x..','..__LUADeviceRealCenterPos.y..
				 ']\n\t[ResourceDir = '..'"'..__LUADeviceResourceDir..'"]'
LUALog(startmsg)
