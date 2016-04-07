var solution = new Solution('Branch Ninja');
var project = new Project('Branch Ninja');
project.targetOptions = {"flash":{},"android":{}};
project.setDebugDir('build/linux');
project.addSubProject(Solution.createProject('build/linux-build'));
project.addSubProject(Solution.createProject('/home/varomix/dev/Kha'));
project.addSubProject(Solution.createProject('/home/varomix/dev/Kha/Kore'));
solution.addProject(project);
if (fs.existsSync(path.join('/usr/lib/haxelib/kha2d', 'korefile.js'))) {
	project.addSubProject(Solution.createProject('/usr/lib/haxelib/kha2d'));
}
return solution;
