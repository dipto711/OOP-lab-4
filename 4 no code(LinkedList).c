import java.util.LinkedList;

public class LinkedListReverse {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 1; i <= 10; i++) {
            list.add(i);
        }
        System.out.println("Original LinkedList:");
        System.out.println(list);
        System.out.println("Reversed LinkedList:");
        for (int i = list.size() - 1; i >= 0; i--) {
            System.out.print(list.get(i) + " ");
        }
    }
}

