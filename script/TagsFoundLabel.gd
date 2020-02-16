extends Label

var total: int
var amount_found := 0

func _on_PicBox_ready():
	total = $"../MainLayout/PicBox".tags.size()
	update_text()


func update_text():
	text = " %2d / %2d tags found" % [amount_found, total]


func _on_PicBox_tag_found(_tag):
	amount_found += 1
	update_text()
