// Write a function to determine two words are anagram or not
function fn(a,b) {
	if(a.length != b.length) return 0;
	let map_a = new Map();
	let map_b = new Map();
	for(let i=0;i<a.length;i++){
		if(map_a.has(a[i])) continue;
		else map_a.set(a[i],0);
	}
	for(let i=0;i<b.length;i++){
		if(map_b.has(b[i])) continue;
		else map_b.set(b[i],0);
	}
	for(let i=0;i<a.length; i++){
		map_a.set(a[i],map_a.get(a[i])+1);
	}
	for(let i=0; i<b.length; i++){
		map_b.set(b[i],map_b.get(b[i])+1);
	}
	for(let i=0; i<a.length; i++){
		if(map_a.get(a[i]) != map_b.get(a[i])) return 0;
	}
	return 1;
	//~ for(let i=0;i<map_a.size; i++){
		//~ console.log(map)
	//~ }
	//~ console.log(map_a, map_b);
}
console.log(fn("slllee", "llpeels"));
