export default function Card({title,btnText="Read more"}){ {/* default value */}
    return(
        <div className="max-w-xs mb-5 mx-5 rounded-md shadow-md bg-black text-gray-100">
          <img
            src="vite.svg"
            alt=""
            className="p-4 w-full rounded-t-md h-50 bg-gray-500"
          />
          <div className="flex flex-col justify-between p-6 space-y-8">
            <div className="space-y-2">
              <h2 className="text-3xl font-semibold tracking-wide">{title}</h2>
              <p className="text-gray-400">
                Lorem ipsum dolor sit amet consectetur, adipisicing elit. Distinctio tempora ipsum
                soluta amet corporis accusantium aliquid consectetur eaque!
              </p>
            </div>
            <button
              type="button"
              className="flex items-center justify-center w-full p-3 font-semibold tracking-wide rounded-md bg-gray-800 text-gray-200"
            >
              {btnText} {/* {btnText || "Read more"} */}
            </button>
          </div>
        </div>
    )
}