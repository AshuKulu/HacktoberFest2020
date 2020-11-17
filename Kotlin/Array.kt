fun main() 
{ 
	// declaring an array using arrayOf() 
	val arrayname = arrayOf(1, 2, 3, 4, 5) 
	for (i in 0..arrayname.size-1) 
	{ 
		print(" "+arrayname[i]) 
	} 
	println() 
	// declaring an array using arrayOf<Int> 
	val arrayname2 = arrayOf<Int>(10, 20, 30, 40, 50) 
	for (i in 0..arrayname2.size-1) 
	{ 
		print(" "+arrayname2[i]) 
	} 
} 
