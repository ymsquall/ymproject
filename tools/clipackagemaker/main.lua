require "utility"
require "dofile"

__WorkingDirection = lfs.currentdir()
__COCOS2DWinRootDir = 'E:/cocos2d/cocos2d-x-3.0alpha0-pre/cocos2d-x-3.0alpha0-pre'
__ResourceDirection = {
	__WorkingDirection,
	__COCOS2DWinRootDir,
}

function ProcCodeFile(fn)
	local path = string.gsub(fn, 'E:/cocos2d/cocos2d-x', '')
	print('--proccess file "'..path..'" begining...')

	print('--file proccess "'..path..'" over!!!')
end


_AllProcFile = GetAllFiles(__COCOS2DWinRootDir, {'.h','hpp'}, true)
for _,v in pairs(_AllProcFile) do
	ProcCodeFile(v)
end
--]]
