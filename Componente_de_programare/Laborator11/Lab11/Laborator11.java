public class Laborator11
{
    // instance variables - replace the example below with your own
    private Punct p1, p2;

    /**
     * Constructor for objects of class Laborator11
     */
    public Laborator11()
    {
        p1 = new Cerc(100, 100, 30);
        p2 = new Dreptunghi(100, 140, 50, 70);
        p1.setCuloare("yellow");
        p1.setVizibil(true);
        p2.setVizibil(true);
    }
}