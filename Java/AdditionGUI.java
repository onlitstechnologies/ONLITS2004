import java.awt.*;

class AdditionGUI extends Frame {
	Label lblaugend, lbladdend, lblsum;
	TextField txtaugend, txtaddend, txtsum;
	Button btnadd;

	AdditionGUI() {
		setSize(400,300);
		setVisible(true);
		setTitle("Addition App");
		setLayout(null);

		lblaugend = new Label("Augend");
		lblaugend.setBounds(50,50, 100, 30);
		add(lblaugend);

		lbladdend = new Label("Addend");
		lbladdend.setBounds(50,100, 100, 30);
		add(lbladdend);

		lblsum = new Label("Sum");
		lblsum.setBounds(50, 150, 100, 30);
		add(lblsum);

		txtaugend = new TextField();
		txtaugend.setBounds(150, 50, 100, 30);
		add(txtaugend);

		txtaddend = new TextField();
		txtaddend.setBounds(150, 100, 100, 30);
		add(txtaddend);

		txtsum = new TextField();
		txtsum.setBounds(150, 150, 100, 30);
		add(txtsum);

		btnadd = new Button("Add");
		btnadd.setBounds(50, 200, 100, 30);
		add(btnadd);
	}
	public static void main(String[] args) {
		new AdditionGUI();
	}
}
