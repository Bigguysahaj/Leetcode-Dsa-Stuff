/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var throttle = function(fn, t) {
    let isThrottle = false;
    let nextArgs = null;
  return function(...args) {
      if(!isThrottle){
          fn(...args);
          isThrottle = true;
          setTimeout(helper,t);
      }else{
          nextArgs = args;
      }

      function helper(){
          if(nextArgs){
              fn(...nextArgs);
              isThrottle = true;
              nextArgs = null;
              setTimeout(helper,t);
          }else{
              isThrottle = false;
          }
      }
  }
};

/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */