public class PrintDiamond {
	public static void main(String[] args) {
		StringBuffer diamond = new StringBuffer();
		for(int i = 0; i < 10; i++){
			for(int j = i ; j <10; j++){
				diamond.append(" ");
			}
			for(int k = 0; k<i;k++){
				diamond.append("* ");
			}
			diamond.append("\n");
		}
		for(int i = 10; i > 0; i--){
			for(int j = i; j < 10; j++){
				diamond.append(" ");
			}
			for(int k = 0; k < i; k++){
				diamond.append("* ");
			}
			diamond.append("\n");
		}
		System.out.println(diamond);
	}
}

/* output:
 *           
         * 
        * * 
       * * * 
      * * * * 
     * * * * * 
    * * * * * * 
   * * * * * * * 
  * * * * * * * * 
 * * * * * * * * * 
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * * 
    * * * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         * 
*/
