__OldDoFile = dofile
__ResourceDirection = __ResourceDirection or {}

dofile = function(fn)
	local errMsg = {}
	for i,v in pairs(__ResourceDirection) do
		local fileFullPath = v..'/'..fn
		if FileExist(fileFullPath)==true then
			return __OldDoFile(fileFullPath)
		else
			table.insert(errMsg,'\tdofile failed, "'..fileFullPath..'" not exist!!!')
		end
	end
	for i,v in pairs(errMsg) do
		print(v)
	end
	return nil
end

