import java.awt.*;

class AdditionGUI extends Frame {
	AdditionGUI() {
		setSize(500,500);
		setVisible(true);
		setTitle("Addition App");
		Label l = new Label("Augend");
		add(l);
	}
	public static void main(String[] args) {
		new AdditionGUI();
	}
}
