// const fetch = require('node-fetch')
const axios = require('axios')
const {performance} = require('perf_hooks')

const url = "https://open.neis.go.kr/hub/mealServiceDietInfo?KEY=f1435f12d4d94899a408a1cf5494515f&Type=json&pIndex=1&pSize=15&ATPT_OFCDC_SC_CODE=G10&SD_SCHUL_CODE=7430048&MLSV_FROM_YMD=20210316&MLSV_TO_YMD=20210325"

!async function(url) {
	const start = performance.now()
	const res = await axios(url)
	const end = performance.now()

	// const json = await res.json()

	// console.log(`${JSON.stringify(json)}`)
	console.log(res)

	console.log(`Time: ${(end - start)}msecend`);
}(url)
