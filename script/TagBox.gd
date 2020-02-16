extends VBoxContainer

# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.

# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass


func _on_PicBox_tag_found(tag):
	var new_label := Label.new()
	new_label.text = tag
	add_child(new_label)
