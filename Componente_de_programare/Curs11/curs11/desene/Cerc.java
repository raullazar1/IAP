package desene;

public class Cerc extends Punct
{
    // instance variables - replace the example below with your own
    private int raza;


    /**
     * Constructor for objects of class Cerc
     */
    public Cerc(int raza, int x, int y)
    {
        // initialise instance variables
        super(x, y);
        this.raza = raza;
    }

    public double arie()
    {
        return Math.PI * raza * raza;
    }
    
    public double perim()
    {
        return 2 * Math.PI * raza;
    }
    
    public void desenez()
    {
        //  Se deseneaza cercul
    }
}
