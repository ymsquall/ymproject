-- avoid memory leak
collectgarbage("setpause", 100)
collectgarbage("setstepmul", 5000)
require "luascript/luautility"
require "luascript/toolkit"
require "luascript/environment"
require "luascript/showing/metatext.lua"


require "luascript/models/gamescenemodel"
require "luascript/models/gamescenemodel_loader"
require "luascript/models/playstruggle_var01"
require "luascript/models/actionmodel"
require "luascript/models/skillmodel"
require "luascript/views/helper"
require "luascript/views/login"
require "luascript/views/selecthero"
require "luascript/views/gamesceneview"
require "luascript/views/gamesceneview_playing"
require "luascript/views/gamesceneview_monster"
require "luascript/views/gamesceneview_player"
require "luascript/views/gamesceneview_skill"
require "luascript/views/creatureheaderview"

----------------
