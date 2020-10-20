import java.util.Arrays;

public class NewYearChaos {
    private static void minimumBribes(int[] q) {
        int count = 0;
        int temp, temp1, temp2;

        int[] originalQ = new int[q.length];

        for (int i = 0; i < originalQ.length; i++) {
            originalQ[i] = i+1;
        }

        for (int i = 0; i < originalQ.length; i++) {
            if (q[i] == originalQ[i]) {
                continue;
            }
            int mark1 = i;

            int mark2 = getIndex(i, q[i], originalQ);

            if (mark2 - mark1 <= 2 && mark2 > mark1) {
                if (mark2 - mark1 == 1) {
                    temp2 = originalQ[mark1];
                    originalQ[mark1] = originalQ[mark2];
                    originalQ[mark2] = temp2;

                    count+=1;
                } else {
                    temp = originalQ[mark1 + 1];
                    originalQ[mark1 + 1] = originalQ[mark2];
                    originalQ[mark2] = temp;

                    temp1 = originalQ[mark1];
                    originalQ[mark1] = originalQ[mark1 + 1];
                    originalQ[mark1 + 1] = temp1;

                    count += 2;
                }
            }
        }

        if (Arrays.equals(q, originalQ)) {
            System.out.println(count);
        } else {
            System.out.println("Too chaotic");
        }
    }

    public static void main(String[] args) {
        int[] q = {1, 2, 5, 3, 7, 8, 6, 4}; // 7
        minimumBribes(q);
    }

    private static int getIndex(int index, int number, int[] q) {
        for (int i = index; i < q.length; i++) {
            if (q[i] == number) {
                return i;
            }
        }
        return -1;
    }
}
