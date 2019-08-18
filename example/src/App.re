type action =
  | ShowDrawer
  | HideDrawer;
type state = {drawerOpen: bool};

[@react.component]
let make = () => {
  let (state, _dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | ShowDrawer => {drawerOpen: true}
        | HideDrawer => {drawerOpen: false}
        },
      {drawerOpen: true},
    );
        
  let icon =
    <i className="material-icons"> {ReasonReact.string("alarm")} </i>;

  <div className="drawer-container">
    {state.drawerOpen
       ? <MWC.Drawer>
           <MWC.Drawer.Header>
             <MWC.Drawer.Title>
               {ReasonReact.string("title")}
             </MWC.Drawer.Title>
           </MWC.Drawer.Header>
         </MWC.Drawer>
       : ReasonReact.null}
    <div className="drawer-app-content">
      <MWC.AppBar fixed=true>
        <MWC.AppBar.Row>
          <MWC.AppBar.Section align="start">
            <MWC.AppBar.Icon navIcon=true>
              <div onClick={_e => Js.log("pressed!")}>
                <MWC.MaterialIcon
                  hasRipple=true
                  icon="menu"
                  className="unselectable"
                />
              </div>
            </MWC.AppBar.Icon>
            <MWC.AppBar.Title>
              {ReasonReact.string("title")}
            </MWC.AppBar.Title>
          </MWC.AppBar.Section>
        </MWC.AppBar.Row>
      </MWC.AppBar>
      <MWC.AppBar.FixedAdjust>
        <Body />
      </MWC.AppBar.FixedAdjust>
    </div>
  </div>;
};