

public class Punct
{
    // instance variables - replace the example below with your own
    int x, y;
    boolean vizibil;
    String culoare;
    /**
     * Constructor for objects of class Punct
     */
   public Punct(int x, int y)
    {
        this.x = x;
        this.y = y;
        vizibil = false;
        culoare = "blue";
    }
    
   /**
     * Metode set - get
     */
       public int getX()
    {
        return x;
    }
    
   public void setX(int x)
    {
        this.x = x;
    }
   
    public int getY()
    {
        return y;
    }
    
    public void setY(int y)
    {
        this.y = y;
    }
    
        public void schimbaCuloarea(String c)
    {
        culoare = c;
        if(vizibil) {
            sterge();
            deseneaza();
        }
    }
    
        public void moveHorizontal(int dx)
    {
        if(vizibil) {
            sterge();
        }
        x += dx;
        if(vizibil) {
            deseneaza();
        }
    }
        
    public void moveVertical(int dy)
    {
        if(vizibil) {
            sterge();
        }
        y += dy;
        if(vizibil) {
            deseneaza();
        }
    }
    
      
    public void faVizibil() 
    {
        vizibil = true;
        deseneaza();
    }
    
    public void faInvizibil()
    {
        if(vizibil) {
            sterge();
            vizibil = false;
        }
    }
    
        public void sterge() 
    {
        if(vizibil) {
            Canvas canvas = Canvas.getCanvas();
            canvas.erase(this);
        }
    };

    public void deseneaza() {}
}
