//ExConcatenarNome.java (Autor: Miguel Teixeira)
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class ExConcatenarNome extends JFrame implements ActionListener
{
	JTextField T1,T2,T3,T4;
	JLabel L1,L2,L3, L4;
	JButton B1,B2,B3;

	public static void main(String args[])
	{
		JFrame Janela = new ExConcatenarNome();
		Janela.setVisible(true);
	}

	ExConcatenarNome()
	{
		getContentPane().setBackground( (Color.cyan));
		setTitle("Concatenação de Strings");
		setSize(450,200);
		getContentPane().setLayout(new FlowLayout(FlowLayout.CENTER));

		L1 = new JLabel("Digite seu primeiro nome:");
		L1.setForeground(Color.red);
		L2 = new JLabel("Digite seu nome do meio:");
		L2.setForeground(Color.blue);
		L3 = new JLabel("Digite seu sobrenome:");
		L3.setForeground(Color.magenta);
		L4 = new JLabel("Nome Completo:");

		T1 = new JTextField(22);
		T1.addActionListener(this);
		T2 = new JTextField(22);
		T2.addActionListener(this);
		T3 = new JTextField(22);
		T3.addActionListener(this);
		T4 = new JTextField(33);
		T4.addActionListener(this);
		T4.setHorizontalAlignment(SwingConstants.CENTER);

		B1 = new JButton ("  Concatenar  ");
		B1.addActionListener(this);
		B2 = new JButton ("       Limpar       ");
		B2.addActionListener(this);
		B3 = new JButton ("           Sair           ");
		B3.addActionListener(this);

		getContentPane().add(L1);getContentPane().add(T1);
		getContentPane().add(L2);getContentPane().add(T2);
		getContentPane().add(L3);getContentPane().add(T3);
		getContentPane().add(B1);getContentPane().add(B2); getContentPane().add(B3);

		getContentPane().add(L4);getContentPane().add(T4);
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==B1)
			T4.setText(T1.getText() + " " + T2.getText() + " " + T3.getText());
					
		if(e.getSource()==B2)
		{
			T1.setText(" ");
			T2.setText(" ");
			T3.setText(" ");
			T4.setText(" ");
		}

		if(e.getSource()==B3)
		{
			T1.setText("0"); T2.setText("0");
			T3.setText("0"); T4.setText("0");
			System.exit(0);
		}
	} 
}
