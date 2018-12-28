
public class Cerc
{
    // instance variables - replace the example below with your own
    private int x;
    private int y;
    private int raza;
    
    public Cerc()
    {
        // initialise instance variables
        x = y = raza = 10;
    }

    public Cerc(int x,int y, int raza )
     {
        // initialise instance variables
        this.x = x;
        this.y = y;
        this.raza = raza;
    }
    
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
        sup = (int)(Math.PI *raza*raza);
        return sup;
    }
    
    public int perimetru()
    {
        int perim;
        perim = (int)(2 * Math.PI * raza);
        return perim;
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
