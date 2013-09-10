({

	appDir: "../",	
	baseUrl: "scripts",
	dir: "../../dist",
	mainConfigFile: "../scripts/main.js",
	paths:{
		"almond": "vendor/almond/almond"
	},
	name: 'main',
	optimizeCss: "standard",
    include: ['almond'],
    wrap: true,
	// optimize:"none"
})