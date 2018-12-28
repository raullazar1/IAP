

public class Dreptunghi extends Punct
{
    // instance variables - replace the example below with your own
     int a, b;
     
        public Dreptunghi(int x, int y, int a, int b)
    {
        super (x, y); // Apel constructor Punct
        this.a = a;
        this.b = b;
    }
     

    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y 
     */
    public int sampleMethod(int y)
    {
        // put your code here
        return x + y;
    }
    
        public int getA()
    {
        return a;
    }
    
    public void setA(int a)
    {
        if(getVizibil()) 
            sterge();
        this.a = a;
        deseneaza();
    }
    
    public int getB()
    {
        return b;
    }
    
    public void setB(int b)
    {
        if(getVizibil()) 
            sterge();
        this.b = b;
        deseneaza();
    }

    public void deseneaza()
    {
        if(vizibil) {
            Canvas canvas = Canvas.getCanvas();
            canvas.draw(this, getCuloare(),
                    new Rectangle(getX(), getY(), a, b));
            canvas.wait(10);
        }
    }
    
    public void sterge() 
    {
        if(vizibil) {
            Canvas canvas = Canvas.getCanvas();
            canvas.erase(this);
        }
    }
}
