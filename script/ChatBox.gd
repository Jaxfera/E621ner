extends TextEdit

signal tag_input(tag)

func _init():
	emit_signal("ready")

func _on_ChatBox_text_changed():
	if text.length() == 0: return
	if text[-1] == '\n':
		emit_signal("tag_input", text.strip_edges(false))
		text = ""
