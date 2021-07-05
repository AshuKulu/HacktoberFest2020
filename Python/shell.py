{
 "cells": [
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "# Shell Sort Implementation using Python"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Array before sorting:\n",
      "12\n",
      "34\n",
      "54\n",
      "2\n",
      "3\n"
     ]
    },
    {
     "ename": "TypeError",
     "evalue": "'float' object cannot be interpreted as an integer",
     "output_type": "error",
     "traceback": [
      "\u001b[1;31m---------------------------------------------------------------------------\u001b[0m",
      "\u001b[1;31mTypeError\u001b[0m                                 Traceback (most recent call last)",
      "\u001b[1;32m<ipython-input-3-dc1f2d5450d6>\u001b[0m in \u001b[0;36m<module>\u001b[1;34m\u001b[0m\n\u001b[0;32m     39\u001b[0m         \u001b[0mprint\u001b[0m\u001b[1;33m(\u001b[0m\u001b[0marr\u001b[0m\u001b[1;33m[\u001b[0m\u001b[0mi\u001b[0m\u001b[1;33m]\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m,\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m     40\u001b[0m \u001b[1;33m\u001b[0m\u001b[0m\n\u001b[1;32m---> 41\u001b[1;33m \u001b[0mshellSort\u001b[0m\u001b[1;33m(\u001b[0m\u001b[0marr\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0m\u001b[0;32m     42\u001b[0m \u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m     43\u001b[0m \u001b[0mprint\u001b[0m \u001b[1;33m(\u001b[0m\u001b[1;34m\"\\nArray after sorting:\"\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n",
      "\u001b[1;32m<ipython-input-3-dc1f2d5450d6>\u001b[0m in \u001b[0;36mshellSort\u001b[1;34m(arr)\u001b[0m\n\u001b[0;32m     13\u001b[0m         \u001b[1;32mwhile\u001b[0m \u001b[0mgap\u001b[0m \u001b[1;33m>\u001b[0m \u001b[1;36m0\u001b[0m\u001b[1;33m:\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m     14\u001b[0m \u001b[1;33m\u001b[0m\u001b[0m\n\u001b[1;32m---> 15\u001b[1;33m                 \u001b[1;32mfor\u001b[0m \u001b[0mi\u001b[0m \u001b[1;32min\u001b[0m \u001b[0mrange\u001b[0m\u001b[1;33m(\u001b[0m\u001b[0mgap\u001b[0m\u001b[1;33m,\u001b[0m\u001b[0mn\u001b[0m\u001b[1;33m)\u001b[0m\u001b[1;33m:\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0m\u001b[0;32m     16\u001b[0m \u001b[1;33m\u001b[0m\u001b[0m\n\u001b[0;32m     17\u001b[0m                         \u001b[1;31m# add a[i] to the elements that have been gap sorted\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[1;33m\u001b[0m\u001b[0m\n",
      "\u001b[1;31mTypeError\u001b[0m: 'float' object cannot be interpreted as an integer"
     ]
    }
   ],
   "source": [
    "def shellSort(arr): \n",
    "\tn = len(arr) \n",
    "\tgap = n/2\n",
    "\twhile gap > 0: \n",
    "\n",
    "\t\tfor i in range(gap,n): \n",
    "\t\t\ttemp = arr[i] \n",
    "\t\t\tj = i \n",
    "\t\t\twhile j >= gap and arr[j-gap] >temp: \n",
    "\t\t\t\tarr[j] = arr[j-gap] \n",
    "\t\t\t\tj -= gap \n",
    "\t\t\tarr[j] = temp \n",
    "\t\tgap /= 2\n",
    "\n",
    "arr = [ 12, 34, 54, 2, 3] \n",
    "\n",
    "n = len(arr) \n",
    "print (\"Array before sorting:\") \n",
    "print(arr)\n",
    "\n",
    "shellSort(arr) \n",
    "\n",
    "print (\"\\nArray after sorting:\") \n",
    "print(arr)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.7.4"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
