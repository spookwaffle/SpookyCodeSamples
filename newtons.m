%code provided via
%http://www.math.wsu.edu/faculty/genz/448/lessons/l104.pdf%

f = @(x) ((x-5)^5)*x;
fp =@(x) (5*(x-5)^4)*x + (x-5)^5; 
x = 200;
for i = 0:5
    xo = x;
    x = x - 5*f(x)/fp(x);
    disp('      i         x     |x-x0|     f(x)');
    disp([i x abs(x-xo) f(x)]);

end
