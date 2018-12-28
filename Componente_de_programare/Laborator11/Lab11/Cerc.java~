import java.awt.*;
import java.awt.geom.*;

public class Cerc extends Punct
{
    private int r;

    public Cerc(int x, int y, int r)
    {
        super (x-r, y-r);
        this.r = r;
    }
    
    public int getR()
    {
        return r;
    }
    
    public void setR(int r)
    {
        if(getVizibil()) 
        sterge();
        this.r = r;
        deseneaza();
    }
    
    public void deseneaza()
    {
        if(vizibil) {
            Canvas canvas = Canvas.getCanvas();
            canvas.draw(this, culoare, new Ellipse2D.Double(x-r, y-r, 
                    2*r, 2*r));
            canvas.wait(10);
        }
    }
    
}