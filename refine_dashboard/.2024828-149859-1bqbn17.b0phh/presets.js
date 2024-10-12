module.exports = {
    presets: [
        {
            name: "refine-antd",
            type: "refine-vite",
            answers: {
                "ui-framework": "antd",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-custom-json-rest",
                "auth-provider": "none",
                "antd-example": "antd-example",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "refine-headless",
            type: "refine-vite",
            answers: {
                "ui-framework": "no",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-custom-json-rest",
                "auth-provider": "none",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "refine-mui",
            type: "refine-vite",
            answers: {
                "ui-framework": "mui",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-custom-json-rest",
                "auth-provider": "none",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "refine-antd-nextjs",
            type: "refine-nextjs",
            answers: {
                "ui-framework": "antd",
                "data-provider": "data-provider-custom-json-rest",
                "auth-provider": "none",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "refine-antd-supabase",
            type: "refine-vite",
            answers: {
                "ui-framework": "antd",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-supabase",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "refine-supabase",
            type: "refine-vite",
            answers: {
                "ui-framework": "no",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-supabase",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "refine-appwrite",
            type: "refine-vite",
            answers: {
                "ui-framework": "antd",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-appwrite",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "vite-tailwindcss",
            type: "refine-vite",
            answers: {
                "ui-framework": "tailwindcss",
                "router-provider": "react-router-v6",
                "data-provider": "data-provider-custom-json-rest",
                "auth-provider": "none",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
        {
            name: "nextjs-tailwindcss",
            type: "refine-nextjs",
            answers: {
                "ui-framework": "tailwindcss",
                "data-provider": "data-provider-custom-json-rest",
                "auth-provider": "none",
                "antd-example": "no",
                "mui-example": "no",
                "headless-example": "no",
            },
        },
    ],
};