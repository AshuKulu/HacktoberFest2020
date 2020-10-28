# With numerical analysis this algorithm is helpful for finding root of a specified function under given tolerrance

function [r k] = root_finder(f, x0, kmax, tol)
  x(1)=x0;
  if(abs(f(x(1)))<tol),
      r = x(1);
      k=kmax;
  endif
  for k=2:kmax,
    x(k) = x(k-1) + 0.01;
    if abs(f(x(k)))<tol,
      r = x(k);
      break
    endif
  endfor
endfunction
