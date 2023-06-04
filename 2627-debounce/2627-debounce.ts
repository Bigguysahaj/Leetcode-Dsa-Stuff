type F = (...p: any[]) => any

function debounce(fn: F, t: number): F {
    let timeoutId: ReturnType<typeof setTimeout>;
    return function(...args) {
       clearTimeout(timeoutId);
    timeoutId = setTimeout(() => fn(...args), t);
    }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */