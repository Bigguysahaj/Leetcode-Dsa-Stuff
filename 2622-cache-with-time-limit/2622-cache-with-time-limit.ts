class TimeLimitedCache {
    cache = new Map();

    set(key: number, value: number, duration: number): boolean {
        const exist = this.cache.get(key);
        if(exist){
            clearTimeout(exist.timeoutId);
        }
        const timeoutId = setTimeout(() => {
            this.cache.delete(key);
        }, duration);
        this.cache.set(key, {
            value,
            timeoutId
        })
        
        return Boolean(exist);
    }

    get(key: number): number {
        if(this.cache.has(key))
            return this.cache.get(key).value;
        return -1;
    }

	count(): number {
        return this.cache.size;
    }
}

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */