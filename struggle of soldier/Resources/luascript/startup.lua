-- avoid memory leak
collectgarbage("setpause", 100)
collectgarbage("setstepmul", 5000)
require "luascript/luautility"
require "luascript/toolkit"


require "luascript/models/gamelandmodel"
require "luascript/views/helper"
require "luascript/views/selecthero"
require "luascript/views/gameland"
----------------
