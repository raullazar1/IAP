import java.awt.*;

public class Dreptunghi extends Punct
{
    int a, b;

    public Dreptunghi(int x, int y, int a, int b)
    {
        super (x, y); // Apel constructor Punct
        this.a = a;
        this.b = b;
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