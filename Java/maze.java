public int[][] generateMaze() {
    int[][] maze = new int[height][width];
    // Initialize
    for (int i = 0; i &lt; height; i++)
        for (int j = 0; j &lt; width; j++)
            maze[i][j] = 1;

     Random rand = new Random();
     // r for row、c for column
     // Generate random r
     int r = rand.nextInt(height);
     while (r % 2 == 0) {
         r = rand.nextInt(height);
     }
     // Generate random c
     int c = rand.nextInt(width);
     while (c % 2 == 0) {
         c = rand.nextInt(width);
     }
     // Starting cell
     maze[r][c] = 0;

     //　Allocate the maze with recursive method
     recursion(r, c);

     return maze;
 }

 public void recursion(int r, int c) {
     // 4 random directions
     int[] randDirs = generateRandomDirections();
     // Examine each direction
     for (int i = 0; i &lt; randDirs.length; i++) {

         switch(randDirs[i]){
         case 1: // Up
             //　Whether 2 cells up is out or not
             if (r - 2 &lt;= 0)
                 continue;
             if (maze[r - 2][c] != 0) {
                 maze[r-2][c] = 0;
                 maze[r-1][c] = 0;
                 recursion(r - 2, c);
             }
             break;
         case 2: // Right
             // Whether 2 cells to the right is out or not
             if (c + 2 &gt;= width - 1)
                 continue;
             if (maze[r][c + 2] != 0) {
                 maze[r][c + 2] = 0;
                 maze[r][c + 1] = 0;
                 recursion(r, c + 2);
             }
             break;
         case 3: // Down
             // Whether 2 cells down is out or not
             if (r + 2 &gt;= height - 1)
                 continue;
             if (maze[r + 2][c] != 0) {
                 maze[r+2][c] = 0;
                 maze[r+1][c] = 0;
                 recursion(r + 2, c);
             }
             break;
         case 4: // Left
             // Whether 2 cells to the left is out or not
             if (c - 2 &lt;= 0)
                 continue;
             if (maze[r][c - 2] != 0) {
                 maze[r][c - 2] = 0;
                 maze[r][c - 1] = 0;
                 recursion(r, c - 2);
             }
             break;
         }
     }

 }

 /**
 * Generate an array with random directions 1-4
 * @return Array containing 4 directions in random order
 */
 public Integer[] generateRandomDirections() {
      ArrayList<Integer> randoms = new ArrayList<Integer>();
      for (int i = 0; i < 4; i++)
           randoms.add(i + 1);
      Collections.shuffle(randoms);

     return randoms.toArray(new Integer[4]);
 }
