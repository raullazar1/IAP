package desene;

public class Dreptunghi extends Punct
{
    // instance variables - replace the example below with your own
    private int a;
    private int b;

    /**
     * Constructor for objects of class Dreptunghi
     */
    public Dreptunghi(int a, int b, int x, int y)
    {
        // initialise instance variables
       super(x, y);
        this.a = a;
        this.b = b;
    }

    public int arie()
    {
        return a * b;
    }
    
    public int perim()
    {
        return 2*a + 2*b;
    }
    
    public void desenez()
    {
        //  Se deseneaza dreptunghiul
    }
}
