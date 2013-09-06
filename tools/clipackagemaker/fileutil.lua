require "lfs"

-- 枚举目录下的所有文件
function GetAllFiles(rootpath, exName, subDir, pathes)
    pathes = pathes or {}
	subDir = subDir or false
    for entry in lfs.dir(rootpath) do
        if entry ~= '.' and entry ~= '..' then
            local path = rootpath .. '/' .. entry
            local attr = lfs.attributes(path)
            assert(type(attr) == 'table')

            if attr.mode == 'directory' then
				if subDir then
					GetAllFiles(path, exName, subDir, pathes)
				end
            else
				if exName ~= nil then		-- 扩展名过滤
					if type(exName) == 'table' then
						for _,v in pairs(exName) do
							if type(v) == 'string' and #v > 0 then
								local fileExName = string.sub(path, string.len(path)-string.len(v)+1, string.len(path))
								if fileExName == v then
									table.insert(pathes, path)
								end
							end
						end
					elseif type(exName) == 'string' and #exName > 0 then
						local fileExName = string.sub(path, string.len(path)-string.len(exName)+1, string.len(path))
						if fileExName == exName then
							table.insert(pathes, path)
						end
					end
				else
					table.insert(pathes, path)
				end
            end
        end
    end
    return pathes
end

function FileExist(fn)
	local attr = lfs.attributes(fn)
	if attr==nil or type(attr) ~= 'table' or attr.mode == 'directory' then return false end
	return true
end
