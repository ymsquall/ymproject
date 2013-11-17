-- avoid memory leak
collectgarbage("setpause", 100)
collectgarbage("setstepmul", 5000)
require "luascript/luautility"
require "luascript/toolkit"


require "luascript/models/gamelandmodel"
require "luascript/models/gamelandmodel_loader"
require "luascript/models/playstruggle_var01"
require "luascript/views/helper"
require "luascript/views/login"
require "luascript/views/selecthero"
require "luascript/views/gamelandview"
require "luascript/views/gamelandview_playing"
----------------
