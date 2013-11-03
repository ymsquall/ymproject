-- avoid memory leak
collectgarbage("setpause", 100)
collectgarbage("setstepmul", 5000)
require "luaScript/luautility"
require "luaScript/toolkit"


require "luaScript/models/gamelandmodel"
require "luaScript/views/helper"
require "luaScript/views/selecthero"
require "luaScript/views/gameland"
----------------
