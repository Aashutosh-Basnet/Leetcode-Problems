import java.util.Arrays;

public class MergeSortedArrays {

    public static int[] merge_sorted_arrays(int[] array1, int[] array2) {

        if (array1 == null || array2 == null) {
            return null;
        }

        int n1 = array1.length;
        int n2 = array2.length;

        int[] merged_array = new int[n1 + n2];

        int i = 0, j = 0, k = 0;
        while (i < n1 && j < n2) {
            if (array1[i] <= array2[j]) {
                merged_array[k++] = array1[i++];
            } else {
                merged_array[k++] = array2[j++];
            }
        }

        while (i < n1) {
            merged_array[k++] = array1[i++];
        }

        while (j < n2) {
            merged_array[k++] = array2[j++];
        }

        return merged_array;
    }

    public static void main(String[] args) {
        int[] array1 = {1, 3, 5, 7};
        int[] array2 = {2, 4, 6, 8};
        int[] mergedResult1 = merge_sorted_arrays(array1, array2);

        System.out.println("Merged array: " + Arrays.toString(mergedResult1));
    }
}
