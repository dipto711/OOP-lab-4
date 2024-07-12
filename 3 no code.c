import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class ListOperations {

    public static void main(String[] args) {

        List<Integer> arrayList = new ArrayList<>();
        arrayList.add(1);
        arrayList.add(2);
        arrayList.add(3);
        arrayList.add(4);
        arrayList.add(5);

        System.out.println("ArrayList: " + arrayList);


        List<Integer> linkedList = new LinkedList<>();
        linkedList.add(4);
        linkedList.add(5);
        linkedList.add(6);
        linkedList.add(7);
        linkedList.add(8);

        System.out.println("LinkedList: " + linkedList);


        arrayList.remove(2);
        linkedList.remove(2);

        System.out.println("ArrayList after removal: " + arrayList);
        System.out.println("LinkedList after removal: " + linkedList);


        List<Integer> intersection = new ArrayList<>(arrayList);
        intersection.retainAll(linkedList);

        System.out.println("Intersection: " + intersection);
    }
}
