extends Node

onready var picbox := $PicBox
onready var tagslabel := $TagsFoundLabel

# Called when the node enters the scene tree for the first time.
func _ready():
	tagslabel.text = picbox.tags.length()

# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass


func _on_PicBox_ready():
	pass # Replace with function body.
