
/**
 * Write a description of class Dreptunghi here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Dreptunghi
{
    // instance variables - replace the example below with your own
    private int x;
    private int y;
    private int a;
    private int b;

    /**
     * Constructor for objects of class Dreptunghi
     */
    public Dreptunghi()
    {
        // initialise instance variables
        x = y = a = b = 10;
    }

      public Dreptunghi(int aa, int bb, int xx, int yy)
    {
        // initialise instance variables
        x = xx;
        y = yy;
        a = aa;
        b = bb;
    }
    
    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y 
     */
    public void translatez(int dx,int dy)
    {
        // put your code here
        this.x += dx;
        this.y += dy;
        return;
    }
    
    public int arie()
    {
        int sup;
        sup = a*b;
        return sup;
    }
    
    public int perimetru()
    {
        return 2 *(a+b);
    }
    
    public void mod_x(int dx)
    {
        x =dx;
    }
    
     public void mod_y(int dy)
    {
        y =dy;
    }
    
    public int da_x()
    {
        return x;
    }
    
      public int da_y()
    {
        return y;
    }
}
