local init_encode = package.loadlib("encode.dll","luaopen_encode")
if init_encode then
	init_encode()
else
	print('¶ÁÈ¡×Ö·û×ª»»Ä£¿éÊ§°Ü£¡')
end

_UNICODEHeader = string.char(0xFF)..string.char(0xFE)
_UTF8Bom = string.char(0xEF)..string.char(0xBB)..string.char(0xBF)

--[[
print(_UNICODEHeader)
print(_UTF8Bom)
for k,v in pairs(encode) do
	print(tostring(k)..'<->'..tostring(v))
end
--]]
