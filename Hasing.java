
import java.util.*;

public class Hasing {

     public static void main(String[] args) {

    //     // key(country) Value(population)
         HashMap<String, Integer> map = new HashMap<>();

    //     // insertion:

        map.put("Bangladesh", 120);
        map.put("India", 130);
        map.put("China", 129);
    //     System.out.println(map);

    //     map.put("China", 180);
    //     System.out.println(map);

    //     // Search:

    //     if (map.containsKey("Korea")) {
    //         System.out.println("Key is present in the Hashmap");
    //     } else {
    //         System.out.println("Key is not present in the Hashmap");
    //     }

        // System.out.println(map.get("China")); // exsist
        // System.out.println(map.get("Korea")); // doesn't exsist

        // int arr[] = {10,30,50};
        
        // for(int i=0 ; i<3; i++){
        //     System.out.print(arr[i] +" ");
        // }
        //  System.out.println();

        //  for (int val : arr) {
        //     System.out.print(val +" ");
        //  }
        //  System.out.println();

        //  for (int val : arr) 
        // for(Map.Entry<String, Integer> e : map.entrySet()){
        //     System.out.println(e.getKey());
        //     System.out.println(e.getValue());
        // }

        // Set<String> keys = map.keySet();
        // for (String key: keys) {
        //     System.out.println(key + " " + map.get(key));
        // }

        map.remove("China");
        System.out.println(map);


    }
}