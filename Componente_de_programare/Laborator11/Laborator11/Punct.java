public class Punct
{
    // instance variables - replace the example below with your own
    int x;
    int y;
    String culoare;
    boolean vizibil;

    public Punct(int x, int y)
    {
        this.x = x;
        this.y = y;
        culoare = "blue";
        vizibil = false;
    }

    public void setX(int x) {
        this.x = x;
    }
    
    public int getX() {
        return x;
    }
    
    public void setY(int y) {
        this.y = y;
    }
    
    public int getY() {
        return y;
    }
    
    public void setCuloare(String c)
    {
        culoare = c;
        if(vizibil) {
            deseneaza();
        }
    }
    
    public String getCuloare() {
        return culoare;
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
    
    public void setVizibil(boolean vizibil) {
        this.vizibil = vizibil;
        if(vizibil)
            deseneaza();
        else
           sterge();
    }
    
    public boolean getVizibil() {
        return vizibil;
    }
    
    public void sterge() 
    {
        if(vizibil) {
            Canvas canvas = Canvas.getCanvas();
            canvas.erase(this);
        }
    }
    
    public void deseneaza() {}
    
}
