
public class Laborator9
{
    // instance variables - replace the example below with your own
    private Dreptunghi dr;
    private Cerc cr;

    /**
     * Constructor for objects of class Laborator9
     */
    public Laborator9()
    {
        // initialise instance variables
        dr = new Dreptunghi(30, 25, 10, 7);
        cr = new Cerc(65, 30,20);
        System.out.println("Aria dreptunghiului: " + dr.arie() + ", aria cercului: " + cr.arie());
    }

    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y 
     */
    public static void main(String args[])
    {
        // put your code here
        Laborator9 l = new Laborator9();
    }
}
