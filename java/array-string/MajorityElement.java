public class MajorityElement {

    public int majority_element(int[] array) {
        int candidate = array[0];
        int counter = 1;

        for (int i = 1; i < array.length; i++) {
            if (array[i] == candidate) {
                counter += 1;
            } else {
                counter -= 1;
            }

            if (counter == 0) {
                candidate = array[i];
                counter = 1;
            }
        }
        return candidate;
    }

    public static void main(String[] args) {
        MajorityElement obj = new MajorityElement();

        int[] array = {3, 2, 2, 3, 3};
        int result = obj.majority_element(array);

        System.out.println("Majority Element: " + result);
    }
}
