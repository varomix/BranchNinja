package;

import kha.System;

class Main {
	public static function main() {
		System.init({title: "Branch Ninja", width: 800, height: 480}, function () {
			new BranchNinja();
		});
	}
}
