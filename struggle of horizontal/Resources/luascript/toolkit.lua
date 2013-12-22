function LUALog(...)
    print(string.format(...))
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
	local offPos = cc.p(0,0)
	local index = 0
	if __LUADeviceWinSize.width <= 960 and __LUADeviceWinSize.height <= 640 then --iphone4
		index = 1
	elseif __LUADeviceWinSize.width > 960 and __LUADeviceWinSize.width <=1200 and __LUADeviceWinSize.height <= 640 then	--iphone5 1136 X 640
		index = 2
		offPos = cc.p(90,0)
	elseif __LUADeviceWinSize.width > 960 and __LUADeviceWinSize.width <=1200 and __LUADeviceWinSize.height > 640 and __LUADeviceWinSize.height < 800 then	--iPad 1024 x 768
		index = 3
		offPos = cc.p(36,128/2)
	elseif __LUADeviceWinSize.width  >= 2000 and __LUADeviceWinSize.height >= 1500 then
		index = 4
		offPos = cc.p(2048/2-960/2,1536/2-640/2);
	end
	return offPos,index
end

__LUADeviceWinSize = cc.Director:sharedDirector():getWinSize()
__LUADeviceHelfWinSize = CCSize(__LUADeviceWinSize.width/2.0, __LUADeviceWinSize.height/2.0)
__LUADeviceVisibleSize = cc.Director:sharedDirector():getVisibleSize()
__LUADeviceOriginPos = cc.Director:sharedDirector():getVisibleOrigin()
__LUADeviceOffsetPos, __LUADeviceOffIndex = LUAGetDisplayOffPos()
__LUADeviceCenterPos = cc.p(__LUADeviceVisibleSize.width/2.0, __LUADeviceVisibleSize.height/2.0)
__LUADeviceRealCenterPos = cc.p(__LUADeviceCenterPos.x-__LUADeviceOffsetPos.x, __LUADeviceCenterPos.y-__LUADeviceOffsetPos.y)
__LUADeviceResourceDir = CCFileUtils:getInstance():fullPathForFilename('')
local startmsg = 'lua script begining in device info'..
				 ':\n\t[ScreenSize = '..__LUADeviceWinSize.width..','..__LUADeviceWinSize.height..
				 ']\n\t[VisibleSize = '..__LUADeviceVisibleSize.width..','..__LUADeviceVisibleSize.height..
				 ']\n\t[Origin = '..__LUADeviceOriginPos.x..','..__LUADeviceOriginPos.y..
				 ']\n\t[Offset = '..__LUADeviceOffsetPos.x..','..__LUADeviceOffsetPos.y..','..tostring(__LUADeviceOffIndex)..
				 ']\n\t[Center = '..__LUADeviceCenterPos.x..','..__LUADeviceCenterPos.y..
				 ']\n\t[RealCenter = '..__LUADeviceRealCenterPos.x..','..__LUADeviceRealCenterPos.y..
				 ']\n\t[ResourceDir = '..'"'..__LUADeviceResourceDir..'"]'
LUALog(startmsg)
