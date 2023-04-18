public class Main {

    static Persona p1 = new Persona("Carlo", "De Rossi", "M", "Etero", "Roma", "Biondo", 20, 1.80f, 80.0f);
    static Persona p2 = new Persona("Ornella", "Bianchi", "F", "Etero", "Milano", "Castano", 19, 1.70f, 60.0f);
    public static void main(String[] args) {
        p1.showData();
        System.out.println("***********************************************");
        p2.showData();
    }
}
