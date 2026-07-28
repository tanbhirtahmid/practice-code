// import java.util.Scanner;
import javax.swing.JOptionPane;
public class Hi{
    public static void main(String[] args){
        int age = Integer.parseInt(JOptionPane.showInputDialog("ENTER YOUR AGE:"));
        if(age < 18) JOptionPane.showMessageDialog(null, "You are a child");
        else JOptionPane.showMessageDialog(null, "You are an adult");

    }
}