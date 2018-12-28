
public class Dreptunghi
{
        private int a;
        private int b;
        private int x;
        private int y;
    /**
     * Constructor for objects of class Dreptunghi
     */
    public Dreptunghi(int a, int b, int x, int y)
    {
        //  constructorul clasei
       this.a = a;  //  this se folosește pentru a indica obiectul în curs de construire.
       this.b = b;
       this.x = x;
       this.y = y;
    }

    public int aria()
    {
       return a * b;
    }
    
        public int perim()
    {
        return 2*a + 2*b;
    }
}
